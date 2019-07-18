//#include <iostream>
//#include <cstring>
//using namespace std;
//
//pair<int, int> board[101][101];
//int ans = 0;
//int n, l;
//
//bool check_row(int r, int now, bool front) {
//    if(front) { // now 번째에서 1 작아졌을 때 거기로부터 l번째 까지 체크
//        for(int i=0; i<l; ++i) {
//            if(now + i < 1 || now + i > n) return false;
//            if(board[r][now].first != board[r][now + i].first || board[r][now + i].second) return false;
//        }
//    }
//    else { // now 번째에서 1 커졌을 때 -1번째로부터 -l번째 까지 체크
//        for(int i=1; i<=l; ++i) {
//            if(now - i < 1 || now - i > n) return false;
//            if(board[r][now - 1].first != board[r][now - i].first || board[r][now - i].second) return false;
//        }
//    }
//    return true;
//}
//
//bool check_col(int c, int now, bool front) {
//    if(front) { // now 번째에서 1 작아졌을 때 거기로부터 l번째 까지 체크
//        for(int i=0; i<l; ++i) {
//            if(now + i < 1 || now + i > n) return false;
//            if(board[now][c].first != board[now + i][c].first || board[now + i][c].second) return false;
//        }
//    }
//    else { // now 번째에서 1 커졌을 때 -1번째로부터 -l번째 까지 체크
//        for(int i=1; i<=l; ++i) {
//            if(now - i < 1 || now - i > n) return false;
//            if(board[now - 1][c].first != board[now - i][c].first || board[now - i][c].second) return false;
//        }
//    }
//    return true;
//}
//
//void install_row(int r, int now, bool front) {
//    if(front) {
//        for(int i=0; i<l; ++i)
//            board[r][now + i].second = 1;
//    }
//    else {
//        for(int i=1; i<=l; ++i)
//            board[r][now - i].second = 1;
//    }
//}
//
//void install_col(int c, int now, bool front) {
//    if(front) {
//        for(int i=0; i<l; ++i)
//            board[now + i][c].second = 1;
//    }
//    else {
//        for(int i=1; i<=l; ++i)
//            board[now - i][c].second = 1;
//    }
//}
//
//int main() {
//    cin >> n >> l;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j].first;
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        bool possible = true;
//        for(int j=2; j<=n; ++j) {
//            if(board[i][j-1].first != board[i][j].first) {
//                if(abs(board[i][j-1].first - board[i][j].first) > 1) {
//                    possible = false;
//                    break;
//                }
//                else if(board[i][j-1].first - 1 == board[i][j].first) {
//                    if(check_row(i, j, 1)) {
//                        install_row(i, j, 1);
//                    }
//                    else {
//                        possible = false;
//                        break;
//                    }
//                }
//                else {
//                    if(check_row(i, j, 0)) {
//                        install_row(i, j, 0);
//                    }
//                    else {
//                        possible = false;
//                        break;
//                    }
//                }
//            }
//        }
//        if(possible)
//            ans++;
//    }
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=n; ++j)
//            board[i][j].second = 0;
//    for(int i=1; i<=n; ++i) {
//        bool possible = true;
//        for(int j=2; j<=n; ++j) {
//            if(board[j-1][i].first != board[j][i].first) {
//                if(abs(board[j-1][i].first - board[j][i].first) > 1) {
//                    possible = false;
//                    break;
//                }
//                else if(board[j-1][i].first - 1 == board[j][i].first) {
//                    if(check_col(i, j, 1)) {
//                        install_col(i, j, 1);
//                    }
//                    else {
//                        possible = false;
//                        break;
//                    }
//                }
//                else {
//                    if(check_col(i, j, 0)) {
//                        install_col(i, j, 0);
//                    }
//                    else {
//                        possible = false;
//                        break;
//                    }
//                }
//            }
//        }
//        if(possible)
//            ans++;
//    }
//    cout << ans << '\n';
//}