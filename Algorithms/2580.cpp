//#include "bits/stdc++.h"
//using namespace std;
//
//int board[10][10];
//int total;
//bool finded = false;
//vector<pair<int, int> > candi;
//
//void show() {
//    for(int i=1; i<10; ++i) {
//        for(int j=1; j<10; ++j) {
//            cout << board[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//bool check33(int y, int x) {
//    int sy = ((y-1) / 3 + 1) * 3 - 2;
//    int sx = ((x-1) / 3 + 1) * 3 - 2;
//    int cnt[10] = {0};
//    for(int i=0; i<3; ++i) {
//        for(int j=0; j<3; ++j) {
//            if(++cnt[board[sy+i][sx+j]] == 2) return false;
//        }
//    }
//    return true;
//}
//
//bool check19(int x) {
//    int cnt[10] = {0};
//    for(int i=0; i<9; ++i) {
//        if(++cnt[board[i+1][x]] == 2) return false;
//    }
//    return true;
//}
//
//bool check91(int y) {
//    int cnt[10] = {0};
//    for(int i=0; i<9; ++i) {
//        if(++cnt[board[y][i+1]] == 2) return false;
//    }
//    return true;
//}
//
//void dfs(int now) {
//    if(finded) return;
//    if(now == total) {
//        finded = true;
//        for(int i=1; i<10; ++i) {
//            for(int j=1; j<10; ++j) {
//                cout << board[i][j] << ' ';
//            }
//            cout << '\n';
//        }
//        return;
//    }
//    for(int i = now; i < total; ++i) {
//        int y = candi[i].first;
//        int x = candi[i].second;
//        for(int j=1; j<10; ++j) {
//            board[y][x] = j;
//            if(check33(y, x) && check19(x) && check91(y)) {
//                dfs(now + 1);
//            }
//            board[y][x] = 0;
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    for(int i=1; i<10; ++i) {
//        for(int j=1; j<10; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 0) {
//                ++total;
//                candi.push_back(make_pair(i, j));
//            }
//        }
//    }
//    dfs(0);
//}