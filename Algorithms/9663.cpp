//#include"bits/stdc++.h"
//using namespace std;
//
//int n;
//int dy[] = {1, 1, -1, -1};
//int dx[] = {1, -1, 1, -1};
//int mat[15][15];
//int row[15];
//int col[15];
//int diag[15];
//int diag2[15];
//int ans;
//
//bool check(int y, int x) {
//    if(row[y]) return false;
//    if(col[x]) return false;
//    for(int i=0; i<4; ++i) {
//        int ny = y;
//        int nx = x;
//        while(1) {
//            ny += dy[i];
//            nx += dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > n) break;
//            if(mat[ny][nx]) return false;
//        }
//    }
//    return true;
//}
//
//void dfs(int idx, int cnt) {
//
//    if(cnt == n) {
//        ans++;
//        return;
//    }
//    for(int i=idx+1; i <= n*n; ++i) {
//        int y = (i + n - 1) / n;
//        int x = i % n;
//        if(x == 0) x = n;
//        if(!mat[y][x] && check(y, x)) {
//            mat[y][x] = 1;
//            row[y] = col[x] = 1;
//            if(y > x) {
//                diag[y-x] = 1;
//
//            }
//            else {
//
//            }
//            dfs(i, cnt + 1);
//            row[y] = col[x] = 0;
//            mat[y][x] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    dfs(0, 0);
//    cout << ans;
//}