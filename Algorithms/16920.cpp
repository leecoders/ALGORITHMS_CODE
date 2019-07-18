//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, m, p;
//int s[10];
//char board[1001][1001];
//queue<pair<int, int>> q[10];
//int cnt[10];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m >> p;
//    for(int i=1; i<=p; ++i)
//        cin >> s[i];
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//            if('1' <= board[i][j] && board[i][j] <= '9') {
//                int num = board[i][j] - '0';
//                q[num].push(make_pair(i, j));
//                cnt[num]++;
//            }
//        }
//    }
//    bool next = true; // 다음 확장할 국가가 있는지 체크.
//    while(next) {
//        next = false;
//        for(int i=1; i<=p; ++i) {
//            int day = 0;
//            bool next_day = true; // s[i]가 심하게 클 때, 다음 day에 확장할 공간이 있는지 체크.
//            while (!q[i].empty()) {
//                if(!next_day || day == s[i]) break;
//                next_day = false;
//                int len = q[i].size();
//                for(int l=0; l<len; ++l) {
//                    int y = q[i].front().first;
//                    int x = q[i].front().second;
//                    q[i].pop();
//                    for (int j = 0; j < 4; ++j) {
//                        int ny = y + dy[j];
//                        int nx = x + dx[j];
//                        if (ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                        if (board[ny][nx] == '.') {
//                            board[ny][nx] = board[y][x];
//                            cnt[i]++;
//                            next = true;
//                            next_day = true;
//                            q[i].push(make_pair(ny, nx));
//                        }
//                    }
//                }
//                ++day;
//            }
//        }
//    }
//
//    for(int i=1; i<=p; ++i) {
//        cout << cnt[i] << ' ';
//    }
//}