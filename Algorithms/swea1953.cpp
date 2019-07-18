//#include "bits/stdc++.h"
//
//using namespace std;
//
//int dy[] = {0, 1, 0, -1};
//int dx[] = {1, 0, -1, 0};
//int board[51][51];
//int visited[51][51];
//int ans;
//int n, m, r, c, l;
//
//struct hole {
//    int y, x, dir;
//
//    hole(int _y, int _x, int _dir) {
//        y = _y;
//        x = _x;
//        dir = _dir; // 다음 이동할 방향
//    }
//};
//
//void show() {
//    cout << '\n';
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cout << visited[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//}
//
//bool check(int kind, int dir) {
//    int in_dir = (dir + 2) % 4;
//    switch(kind) {
//        case 1:
//            break;
//        case 2:
//            if(in_dir==0 || in_dir==2) return false;
//            break;
//        case 3:
//            if(in_dir==1 || in_dir==3) return false;
//            break;
//        case 4:
//            if(in_dir==2 || in_dir==1) return false;
//            break;
//        case 5:
//            if(in_dir==3 || in_dir==2) return false;
//            break;
//        case 6:
//            if(in_dir==0 || in_dir==3) return false;
//            break;
//        case 7:
//            if(in_dir==1 || in_dir==0) return false;
//            break;
//    }
//    return true;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int TC;
//    cin >> TC;
//    for (int tc = 1; tc <= TC; ++tc) {
//        memset(visited, 0, sizeof(visited));
//        ans = 0;
//        cin >> n >> m >> r >> c >> l;
//        r++, c++;
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= m; ++j) {
//                cin >> board[i][j];
//            }
//        }
//        queue<hole> q;
//        visited[r][c] = 1;
//        ans++;
//        switch (board[r][c]) {
//            case 1 :
//                q.push(hole(r, c, 0));
//                q.push(hole(r, c, 1));
//                q.push(hole(r, c, 2));
//                q.push(hole(r, c, 3));
//                break;
//            case 2 :
//                q.push(hole(r, c, 1));
//                q.push(hole(r, c, 3));
//                break;
//            case 3 :
//                q.push(hole(r, c, 0));
//                q.push(hole(r, c, 2));
//                break;
//            case 4 :
//                q.push(hole(r, c, 3));
//                q.push(hole(r, c, 0));
//                break;
//            case 5 :
//                q.push(hole(r, c, 1));
//                q.push(hole(r, c, 0));
//                break;
//            case 6 :
//                q.push(hole(r, c, 2));
//                q.push(hole(r, c, 1));
//                break;
//            case 7 :
//                q.push(hole(r, c, 2));
//                q.push(hole(r, c, 3));
//                break;
//        }
//        int day = 0;
//        while (!q.empty()) {
//            day++;
//            if (day == l) break;
//            int len = q.size();
//            for (int L = 0; L < len; ++L) {
//                int y = q.front().y;
//                int x = q.front().x;
//                int dir = q.front().dir;
//                q.pop();
//                int ny = y + dy[dir];
//                int nx = x + dx[dir];
//                if (ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                if (visited[ny][nx] || !board[ny][nx]) continue;
//                if(!check(board[ny][nx], dir)) continue; // 다음 위치로 갈 때 반대편 구멍이 열려있는지 체크
//                ans++;
//                visited[ny][nx] = 1;
//                switch (board[ny][nx]) {
//                    case 1 :
//                        q.push(hole(ny, nx, 0));
//                        q.push(hole(ny, nx, 1));
//                        q.push(hole(ny, nx, 2));
//                        q.push(hole(ny, nx, 3));
//                        break;
//                    case 2 :
//                        q.push(hole(ny, nx, 1));
//                        q.push(hole(ny, nx, 3));
//                        break;
//                    case 3 :
//                        q.push(hole(ny, nx, 0));
//                        q.push(hole(ny, nx, 2));
//                        break;
//                    case 4 :
//                        q.push(hole(ny, nx, 3));
//                        q.push(hole(ny, nx, 0));
//                        break;
//                    case 5 :
//                        q.push(hole(ny, nx, 1));
//                        q.push(hole(ny, nx, 0));
//                        break;
//                    case 6 :
//                        q.push(hole(ny, nx, 2));
//                        q.push(hole(ny, nx, 1));
//                        break;
//                    case 7 :
//                        q.push(hole(ny, nx, 2));
//                        q.push(hole(ny, nx, 3));
//                        break;
//                }
//            }
//        }
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}