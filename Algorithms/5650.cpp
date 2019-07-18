//#include "bits/stdc++.h"
//using namespace std;
//
//int n;
//int dy[] = {0, 1, 0, -1};
//int dx[] = {1, 0, -1, 0};
//int board[102][102];
//vector<pair<int, int> > white[11];
//int ans;
//
//void init() {
//    ans = 0;
//    for(int i=6; i<=10; ++i) {
//        white[i].clear();
//    }
//}
//
//int get1(int dir) {
//    switch(dir) {
//        case 0:
//            return 2;
//        case 1:
//            return 0;
//        case 2:
//            return 3;
//        case 3:
//            return 1;
//    }
//}
//int get2(int dir) {
//    switch(dir) {
//        case 0:
//            return 2;
//        case 1:
//            return 3;
//        case 2:
//            return 1;
//        case 3:
//            return 0;
//    }
//}
//int get3(int dir) {
//    switch(dir) {
//        case 0:
//            return 1;
//        case 1:
//            return 3;
//        case 2:
//            return 0;
//        case 3:
//            return 2;
//    }
//}
//int get4(int dir) {
//    switch(dir) {
//        case 0:
//            return 3;
//        case 1:
//            return 2;
//        case 2:
//            return 0;
//        case 3:
//            return 1;
//    }
//}
//int get5(int dir) {
//    return (dir + 2) % 4;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int TC;
//    cin >> TC;
//    for(int tc =  1; tc <= TC; ++tc) {
//        init();
//        cin >> n;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//                if(board[i][j] > 5) {
//                    white[board[i][j]].push_back(make_pair(i, j));
//                }
//            }
//        }
//
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                if(!board[i][j]) {
//                    for(int k=0; k<4; ++k) {
//                        int cnt = 0;
//                        int y = i;
//                        int x = j;
//                        int dir = k;
//                        while(1) {
//                            int ny = y + dy[dir];
//                            int nx = x + dx[dir];
//                            if(ny == i && nx == j) break;
//                            if(ny < 1 || nx < 1 || ny > n || nx > n) {
//                                y = ny;
//                                x = nx;
//                                cnt++;
//                                dir = (dir + 2) % 4;
//                                continue;
//                            }
//                            else if(!board[ny][nx]) { // 0일 때
//                                y = ny;
//                                x = nx;
//                                continue;
//                            }
//                            else if(board[ny][nx] == -1) { // 블랙홀일 때
//                                break;
//                            }
//                            else if(board[ny][nx] < 6) { // 벽 1~5를 만났다.
//                                switch (board[ny][nx]) {
//                                    case 1:
//                                        dir = get1(dir);
//                                        break;
//                                    case 2:
//                                        dir = get2(dir);
//                                        break;
//                                    case 3:
//                                        dir = get3(dir);
//                                        break;
//                                    case 4:
//                                        dir = get4(dir);
//                                        break;
//                                    case 5:
//                                        dir = get5(dir);
//                                        break;
//                                }
//                                y = ny;
//                                x = nx;
//                                cnt++;
//                                continue;
//                            }
//                            else if(board[ny][nx] > 5) { // 웜홀 6~10을 만났다.
//                                int color = board[ny][nx];
//                                for(int w=0; w<2; ++w) {
//                                    if(white[color][w].first != ny || white[color][w].second != nx) {
//                                        ny = white[color][w].first;
//                                        nx = white[color][w].second;
//                                        break;
//                                    }
//                                }
//                                y = ny;
//                                x = nx;
//                                continue;
//                            }
//
//                        }
//                        ans = max(ans, cnt);
//                    }
//                }
//            }
//        }
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}