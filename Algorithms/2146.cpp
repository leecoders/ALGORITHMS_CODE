//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int n, ny, nx;
//int board[101][101];
//int nation[101][101] = {0};
//int visited[101][101];
//int ans = 987654321;
//int num = 0;
//
//void dfs(int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(visited[ny][nx]) continue;
//        if(board[ny][nx] == 0) continue;
//        nation[ny][nx] = num;
//        visited[ny][nx] = 1;
//        dfs(ny, nx);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    memset(visited, 0, sizeof(visited));
//
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    // nation 설정
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            if(board[i][j] == 1 && !visited[i][j]) {
//                num++;
//                nation[i][j] = num;
//                visited[i][j] = 1;
//                dfs(i, j);
//            }
//        }
//    }
//    // 국가별 다리 건설
//    for(int N = 1; N <= num; ++N) {
//        memset(visited, 0, sizeof(visited));
//        queue<tuple<int, int, int> > q;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                if(nation[i][j] == N) {
//                    visited[i][j] = 1;
//                    q.push(make_tuple(i, j, 0));
//                }
//            }
//        }
//        while(!q.empty()) {
//            int y = get<0>(q.front());
//            int x = get<1>(q.front());
//            int cnt = get<2>(q.front());
//            q.pop();
//            if(nation[y][x] != 0 && N != nation[y][x]) {
//                ans = min(ans, cnt-1);
//            }
//            if(ans < cnt) break; // 여기서 조심해야함.. ans 보다 크다고해서 탈출해버리면 아직 큐에 있는 ans보다 작은 입력값이 안돌고 끝나버릴 수 있어
//
//            for(int i=0; i<4; ++i) {
//                ny = y + dy[i];
//                nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//                if(visited[ny][nx]) continue;
//                visited[ny][nx] = 1;
//                q.push(make_tuple(ny, nx, cnt+1));
//            }
//        }
//    }
//    cout << ans;
//}