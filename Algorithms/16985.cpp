//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int INF = 1234567890;
//int dz[] = {0, 0, 0, 0, 1, -1};
//int dy[] = {0, 0, 1, -1, 0, 0};
//int dx[] = {1, -1, 0, 0, 0, 0};
//int mat[6][6][6];
//int visited[6][6][6];
//int temp[6][6];
//int ans = INF;
//string order;
//
//struct N {
//    int z, y, x;
//    N(int _z, int _y, int _x) {
//        z = _z;
//        y = _y;
//        x = _x;
//    }
//};
//
//void rotate(int floor);
//void bfs();
//void perm();
//void dfs(int floor);
//
//int main() {
//    for (int i = 1; i < 6; ++i)
//        for (int j = 1; j < 6; ++j)
//            for (int k = 1; k < 6; ++k)
//                cin >> mat[i][j][k];
//    perm();
//    if (ans == INF) cout << -1;
//    else cout << ans;
//}
//
//
//void perm() {
//    order = "12345";
//    do {
//        dfs(1);
//    } while(next_permutation(order.begin(), order.end()));
//}
//
//void dfs(int floor) {
//    if (floor == 6) return;
//    for (int i = 0; i < 4; ++i) {
//        rotate(floor);
//        bfs();
//        dfs(floor + 1);
//    }
//}
//
//void rotate(int floor) {
//    for (int i = 1; i < 6; ++i) {
//        for (int j = 1; j < 6; ++j) {
//            temp[i][j] = mat[floor][6 - j][i];
//        }
//    }
//    for (int i = 1; i < 6; ++i) {
//        for (int j = 1; j < 6; ++j) {
//            mat[floor][i][j] = temp[i][j];
//        }
//    }
//}
//
//void bfs() {
//    int nA = 1;
//    int nB = 1;
//    int mA = 5;
//    int mB = 5;
//
//    if(!mat[order[0] - '0'][nA][nB]) return;
//    memset(visited, -1, sizeof(visited));
//    queue<N> q;
//    q.push(N(1, nA, nB));
//    visited[order[0] - '0'][nA][nB] = 0;
//    while (!q.empty()) {
//        int z = q.front().z; // 층 순서 1~5
//        int z_now = order[z-1] - '0'; // 실제 층 번호
//        int y = q.front().y;
//        int x = q.front().x;
//        q.pop();
//        if (z == 5 && y == mA && x == mB) {
//            ans = min(ans, visited[z_now][y][x]);
//            break;
//        }
//        for (int j = 0; j < 6; ++j) {
//            int nz = z + dz[j];
//            int z_next = order[nz-1] - '0';
//            int ny = y + dy[j];
//            int nx = x + dx[j];
//            if (nz < 1 || ny < 1 || nx < 1 || nz > 5 || ny > 5 || nx > 5) continue;
//            if (mat[z_next][ny][nx] && (visited[z_next][ny][nx] == -1)) {
//                visited[z_next][ny][nx] = visited[z_now][y][x] + 1;
//                q.push(N(nz, ny, nx));
//            }
//        }
//    }
//}