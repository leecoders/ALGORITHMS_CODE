//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int dy[] = {1, 1, -1, -1};
//int dx[] = {1, -1, 1, -1};
//int n;
//int board[11][11];
//int ans = 0;
//vector<pair<int, int>> v1, v2;
//
//bool check(int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y;
//        int nx = x;
//        while(1) {
//            ny += dy[i];
//            nx += dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > n) break;
//            if(board[ny][nx] == 2) return false;
//        }
//    }
//    return true;
//}
//
//void dfs(int now, int cnt, vector<pair<int, int>>& v) {
//    int len = v.size();
//    if(now == len) {
//        ans = max(ans, cnt);
//        return;
//    }
//    if(cnt + (len - now + 1) <= ans) return;
//    int y = v[now].first;
//    int x = v[now].second;
//    if(check(y, x)) {
//        board[y][x] = 2;
//        dfs(now + 1, cnt + 1, v);
//        board[y][x] = 1;
//    }
//    dfs(now + 1, cnt, v);
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j];
//            if(board[i][j]) {
//                if((i + j) % 2)
//                    v1.push_back(make_pair(i, j));
//                else
//                    v2.push_back(make_pair(i, j));
//            }
//        }
//    }
//
//    dfs(0, 0, v1);
//    int temp = ans;
//    ans = 0;
//    dfs(0, 0, v2);
//    ans += temp;
//    cout << ans;
//}