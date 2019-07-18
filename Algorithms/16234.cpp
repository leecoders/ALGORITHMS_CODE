//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, l, r;
//int mat[101][101];
//int visited[101][101];
//bool visited2[101][101];
//int sum[10001];
//int cnt_color[10001];
//bool check = true;
//
//void dfs2(int y, int x, int val) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(visited2[ny][nx]) continue;
//        if(visited[y][x] == visited[ny][nx]) {
//            mat[ny][nx] = val;
//        }
//    }
//}
//
//void dfs(int y, int x, int color) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(visited[ny][nx]) continue;
//        if(l <= abs(mat[ny][nx] - mat[y][x]) && abs(mat[ny][nx] - mat[y][x]) <= r) {
//            sum[color] += mat[ny][nx];
//            cnt_color[color]++;
//            visited[ny][nx] = color;
//            dfs(ny, nx, color);
//            check = true;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> l >> r;
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=n; ++j)
//            cin >> mat[i][j];
//    int T = 0;
//    for(int t=1; t<=2000; ++t) {
//        if(!check) break;
//        check = false;
//
//        memset(cnt_color, 0, sizeof(cnt_color));
//        memset(visited, 0, sizeof(visited));
//        memset(visited2, 0, sizeof(visited2));
//        memset(sum, 0, sizeof(sum));
//        int cnt = 0;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                if(!visited[i][j]) {
//                    ++cnt;
//                    visited[i][j] = cnt;
//                    sum[cnt] = mat[i][j];
//                    cnt_color[cnt] = 1;
//                    dfs(i, j, cnt);
//                }
//            }
//        }
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                if(!visited2[i][j]) {
//                    visited2[i][j] = 1;
//                    int color = visited[i][j];
//                    int val = sum[color] / cnt_color[color];
//                    mat[i][j] = val;
//                    dfs2(i, j, val);
//                }
//            }
//        }
//        if(check) T++;
//    }
//    cout << T;
//}