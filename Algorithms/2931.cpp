//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int sy, sx, ty, tx;
//int dy[] = {0, 1, 0, -1}; // 동, 남, 서, 북
//int dx[] = {1, 0, -1 ,0};
//char board[26][26];
//bool visited[26][26];
//int Y, X;
//char ans;
//bool find_ans;
//int total_pipe;
//
//void show() {
//    cout << '\n';
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cout << visited[i][j];
//        }
//        cout << '\n';
//    }
//}
//
//bool check() {
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] != '.' && !visited[i][j]) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//int get1(int dir) {
//    switch(dir) {
//        case 0 :
//            return -1;
//        case 1 :
//            return -1;
//        case 2 :
//            return 1;
//        case 3 :
//            return 0;
//    }
//}
//int get2(int dir) {
//    switch(dir) {
//        case 0 :
//            return -1;
//        case 1 :
//            return 0;
//        case 2 :
//            return 3;
//        case 3 :
//            return -1;
//    }
//}
//int get3(int dir) {
//    switch(dir) {
//        case 0 :
//            return 3;
//        case 1 :
//            return 2;
//        case 2 :
//            return -1;
//        case 3 :
//            return -1;
//    }
//}
//int get4(int dir) {
//    switch(dir) {
//        case 0 :
//            return 1;
//        case 1 :
//            return -1;
//        case 2 :
//            return -1;
//        case 3 :
//            return 2;
//    }
//}
//int get5(int dir) {
//    switch(dir) {
//        case 0 :
//            return -1;
//        case 1 :
//            return 1;
//        case 2 :
//            return -1;
//        case 3 :
//            return 3;
//    }
//}
//int get6(int dir) {
//    switch(dir) {
//        case 0 :
//            return 0;
//        case 1 :
//            return -1;
//        case 2 :
//            return 2;
//        case 3 :
//            return -1;
//    }
//}
//int get7(int dir) {
//    return dir;
//}
//
//void dfs(int y, int x, int dir, int cnt) {
//    if(find_ans) return;
//    int ny = y + dy[dir];
//    int nx = x + dx[dir];
//    if(ny == ty && nx == tx) {
//        if(!check()) return;
//        if(y == Y && x == X) { // 고친 부분이 'Z'와 인접이면 답이 아님.
//            return;
//        }
//        find_ans = true;
//        return;
//    }
//    if(ny < 1 || nx < 1 || ny > n || nx > m) return;
//    if(board[ny][nx] == '.') {
//        if(cnt == 0) {
//            for(int i=0; i<7; ++i) {
//                if(find_ans) return; // 흠..
//                char next = char('1' + i);
//                board[ny][nx] = next;
//                int next_dir;
//                Y = ny, X = nx, ans = next;
//                switch(board[ny][nx]) {
//                    case '1' :
//                        next_dir = get1(dir);
//                        break;
//                    case '2' :
//                        next_dir = get2(dir);
//                        break;
//                    case '3' :
//                        next_dir = get3(dir);
//                        break;
//                    case '4' :
//                        next_dir = get4(dir);
//                        break;
//                    case '5' :
//                        next_dir = get5(dir);
//                        break;
//                    case '6' :
//                        next_dir = get6(dir);
//                        break;
//                    case '7' :
//                        next_dir = get7(dir);
//                        break;
//                }
//                if(next_dir == -1) continue;
//                visited[ny][nx] = 1;
//                dfs(ny, nx, next_dir, cnt+1);
//                visited[ny][nx] = 0;
//                board[ny][nx] = '.';
//            }
//        }
//        else {
//            return;
//        }
//    }
//    else if(ny == sy && nx == sx) return;
//    else {
//        switch(board[ny][nx]) {
//            case '1' :
//                dir = get1(dir);
//                break;
//            case '2' :
//                dir = get2(dir);
//                break;
//            case '3' :
//                dir = get3(dir);
//                break;
//            case '4' :
//                dir = get4(dir);
//                break;
//            case '5' :
//                dir = get5(dir);
//                break;
//            case '6' :
//                dir = get6(dir);
//                break;
//            case '7' :
//                dir = get7(dir);
//                break;
//        }
//        if(dir == -1) return;
//        visited[ny][nx] = 1;
//        dfs(ny, nx, dir, cnt);
//        visited[ny][nx] = 0;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 'M') {
//                sy = i;
//                sx = j;
//            }
//            else if(board[i][j] == 'Z') {
//                ty = i;
//                tx = j;
//            }
//            else if(board[i][j] == '|') {
//                total_pipe++;
//                board[i][j] = '5';
//            }
//            else if(board[i][j] == '-') {
//                total_pipe++;
//                board[i][j] = '6';
//            }
//            else if(board[i][j] == '+') {
//                total_pipe++;
//                board[i][j] = '7';
//            }
//            else if(board[i][j] != '.') {
//                total_pipe++;
//            }
//        }
//    }
//    visited[sy][sx] = visited[ty][tx] = 1;
//    for(int i=0; i<4; ++i) {
//        int ny = sy + dy[i];
//        int nx = sx + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//        if(board[ny][nx] != '.')
//            dfs(sy, sx, i, 0);
//    }
//    if(ans == '5') ans = '|';
//    if(ans == '6') ans = '-';
//    if(ans == '7') ans = '+';
//    cout << Y << ' ' << X << ' ' << ans;
//}