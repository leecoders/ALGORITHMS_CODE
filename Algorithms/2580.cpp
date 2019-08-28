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
//bool check33(int y, int x, int num) {
//    int sy = ((y-1) / 3 + 1) * 3 - 2;
//    int sx = ((x-1) / 3 + 1) * 3 - 2;
//    for(int i=0; i<3; ++i) {
//        for(int j=0; j<3; ++j) {
//            if(board[sy+i][sx+j] == num) return false;
//        }
//    }
//    return true;
//}
//
//bool check19(int x, int num) {
//    for(int i=0; i<9; ++i) {
//        if(board[i+1][x] == num) return false;
//    }
//    return true;
//}
//
//bool check91(int y, int num) {
//    for(int i=0; i<9; ++i) {
//        if(board[y][i+1] == num) return false;
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
//    int y = candi[now].first;
//    int x = candi[now].second;
//    for(int j=1; j<10; ++j) {
//        if(check33(y, x, j) && check19(x, j) && check91(y, j)) {
//            board[y][x] = j;
//            dfs(now + 1);
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