//#include"bits/stdc++.h"
//using namespace std;
//
//string board[5];
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int ans;
//bool visited[5][5];
//
//void dfs(int y, int x, int cnt, int dasom) {
//    if(dasom + (7 - cnt) < 4) return;
//    if(cnt == 7) {
//        if(dasom >= 4) {
//            ans++;
//        }
//        return;
//    }
//
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
//        if(visited[ny][nx]) continue;
//        visited[ny][nx] = 1;
//        if(board[ny][nx] == 'Y') {
//            dfs(ny, nx, cnt + 1, dasom);
//        }
//        else {
//            dfs(ny, nx, cnt + 1, dasom + 1);
//        }
//        visited[ny][nx] = 0;
//    }
//}
//
//int main() {
//    for(int i=0; i<5; ++i)
//        cin >> board[i];
//    for(int i=0; i<5; ++i)
//        for(int j=0; j<5; ++j) {
//            visited[i][j] = 1;
//            if(board[i][j] == 'Y') {
//                dfs(i, j, 1, 0);
//            }
//            else {
//                dfs(i, j, 1, 1);
//            }
//            visited[i][j] = 0;
//        }
//    cout << ans;
//}