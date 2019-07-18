//#include "bits/stdc++.h"
//using namespace std;
//
//int board[11][11];
//int visited[11][11];
//int ans=51;
//int cnt;
//int blocks;
//int block[6] = {0, 5, 5, 5, 5, 5};
//int total;
//
//bool possible(int y, int x, int size) {
//    for(int i=0; i<size; ++i) {
//        for(int j=0; j<size; ++j) {
//            if(y + i > 10 || x + j > 10) {
//                cout << y + i << ' ' << x + j << ' ';
//                cout << board[y + i][x + j] << ' ' << visited[y + i][x + j] << '\n';
//            }
//            if (!board[y + i][x + j] || visited[y + i][x + j]) return false;
//        }
//
//    }
//    return true;
//}
//
//void install(int y, int x, int size) {
//    for(int i=0; i<size; ++i) {
//        for (int j = 0; j < size; ++j)
//            visited[y + i][x + j] = 1;
//    }
//}
//
//void uninstall(int y, int x, int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j)
//            visited[y + i][x + j] = 0;
//    }
//}
//
//void dfs(int now) {
//    if(cnt >= ans) return;
//    if(blocks == total) {
//        ans = min(cnt, ans);
//        return;
//    }
//    for(int i = now + 1; i<=100; ++i) {
//        int y = (i-1) / 10 + 1;
//        int x = i % 10;
//        if(x==0) x = 10;
//        if(board[y][x] && !visited[y][x]) {
//            for(int j = 1; j <= 5; ++j) {
//                if(block[j] && possible(y, x, j)) {
//                    blocks += j * j;
//                    cnt++;
//                    block[j]--;
//                    install(y, x, j);
//                    dfs(i);
//                    uninstall(y, x, j);
//                    block[j]++;
//                    cnt--;
//                    blocks -= j * j;
//                }
//            }
//            break;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    for(int i=1; i<=10; ++i)
//        for(int j=1; j<=10; ++j) {
//            cin >> board[i][j];
//            if(board[i][j]) total++;
//        }
//    dfs(0);
//    if(ans == 51) cout << -1 << '\n';
//    else cout << ans;
//}