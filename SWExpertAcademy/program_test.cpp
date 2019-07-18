//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int sy, sx;
//int r, c;
//char board[21][21];
//bool visited[21][21][4][16];
//
//int change_dir(int y, int x, int dir, int cache) {
//    switch(board[y][x]) {
//        case '<' :
//            dir = 1;
//            break;
//        case '>' :
//            dir = 0;
//            break;
//        case '^' :
//            dir = 3;
//            break;
//        case 'v' :
//            dir = 2;
//            break;
//        case '_' :
//            dir = cache == 0 ? 0 : 1;
//            break;
//        case '|' :
//            dir = cache == 0 ? 2 : 3;
//            break;
//    }
//    return dir;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tcccc;
//    cin >> tcccc;
//    for(int tc=1; tc<=tcccc; ++tc) {
//        memset(visited, 0, sizeof(visited));
//        sy = 1, sx = 1;
//        cin >> r >> c;
//        for(int i=1; i<=r; ++i) {
//            for(int j=1; j<=c; ++j) {
//                cin >> board[i][j];
//            }
//        }
//        queue<tuple<int, int, int, int>> q;
//        visited[1][1][0][0] = 1;
//        q.push(make_tuple(1, 1, 0, 0));
//        bool stoped = 0;
//        while(!q.empty()) {
//            int y = get<0>(q.front());
//            int x = get<1>(q.front());
//            int dir = get<2>(q.front());
//            int cache = get<3>(q.front());
//            q.pop();
//            dir = change_dir(y, x, dir, cache);
//
//            if('0' <= board[y][x] && board[y][x] <= '9') {
//                cache = board[y][x] - '0';
//            }
//            if(board[y][x] == '+') {
//                if(++cache == 16) cache = 0;
//            }
//            if(board[y][x] == '-') {
//                if(--cache == -1) cache = 15;
//            }
//
//            if(board[y][x] == '@') {
//                stoped = 1;
//                break;
//            }
//            else if(board[y][x] == '?') {
//                for(int i=0; i<4; ++i) {
//                    sy = y + dy[i];
//                    sx = x + dx[i];
//                    if(sy < 1) sy = r;
//                    if(sx < 1) sx = c;
//                    if(sy > r) sy = 1;
//                    if(sx > c) sx = 1;
//                    if(visited[sy][sx][i][cache]) continue;
//                    visited[sy][sx][i][cache] = 1;
//                    q.push(make_tuple(sy, sx, i, cache));
//                }
//            }
//            else {
//                sy = y + dy[dir];
//                sx = x + dx[dir];
//                if(sy < 1) sy = r;
//                if(sx < 1) sx = c;
//                if(sy > r) sy = 1;
//                if(sx > c) sx = 1;
//                if(visited[sy][sx][dir][cache]) continue;
//                visited[sy][sx][dir][cache] = 1;
//                q.push(make_tuple(sy, sx, dir, cache));
//            }
//        }
//        if(stoped) cout << "#" << tc << ' ' << "YES" << '\n';
//        else cout << "#" << tc << ' ' << "NO" << '\n';
//    }
//}