//#include <iostream>
//#include <queue>
//#include <string.h>
//using namespace std;
//
//int n, m;
//int board[21][21];
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//bool visited[21][21];
//int res;
//
//int get_cost(int k) {
//    return k * k + (k-1) * (k-1);
//}
//
//void get_max(int sy, int sx) {
//    memset(visited, 0, sizeof(visited));
//    queue<pair<int, int>> q;
//    int cnt = 0;
//    visited[sy][sx] = 1;
//    q.push(make_pair(sy, sx));
//    int day = 0;
//    while(!q.empty()) {
//        int len = q.size();
//        int income = 0;
//        ++day;
//        int cost = get_cost(day); // 영역 1부터 시작
//        for(int l=0; l<len; ++l) {
//            int y = q.front().first;
//            int x = q.front().second;
//            if(board[y][x]) ++cnt;
//            q.pop();
//            for(int i=0; i<4; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//                if(visited[ny][nx]) continue;
//                visited[ny][nx] = 1;
//                q.push(make_pair(ny, nx));
//            }
//        }
//        income = cnt * m - cost;
//        if(income >= 0)
//            res = max(res, cnt);
//    }
//}
//
//int main() {
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        res = 0;
//        cin >> n >> m;
//        for(int i=1; i<=n; ++i)
//            for(int j=1; j<=n; ++j)
//                cin >> board[i][j];
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                get_max(i, j);
//            }
//        }
//        cout << "#" << tc << " " << res << '\n';
//    }
//}