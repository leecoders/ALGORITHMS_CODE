//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m, r;
//int board[101][101];
//int now[101][101];
//
//void show() {
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cout << board[i][j] << ' ' ;
//        }
//        cout << '\n';
//    }
//}
//
//void init() {
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            now[i][j] = board[i][j];
//        }
//    }
//}
//
//void f1() {
//    init();
//    memset(board, 0, sizeof(board));
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            board[i][j] = now[n+1-i][j];
//        }
//    }
//}
//
//void f2() {
//    init();
//    memset(board, 0, sizeof(board));
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            board[i][j] = now[i][m+1-j];
//        }
//    }
//}
//
//void f3() {
//    init();
//    memset(board, 0, sizeof(board));
//    for(int i=1; i<=m; ++i) {
//        for(int j=1; j<=n; ++j) {
//            board[i][j] = now[n+1-j][i];
//        }
//    }
//    swap(n, m);
//}
//
//void f4() {
//    init();
//    memset(board, 0, sizeof(board));
//    for(int i=1; i<=m; ++i) {
//        for(int j=1; j<=n; ++j) {
//            board[i][j] = now[j][m+1-i];
//        }
//    }
//    swap(n, m);
//}
//
//void f5() {
//    init();
//    memset(board, 0, sizeof(board));
//
//    int y = n/2 + 1;
//    int x = m/2 + 1;
//
//    for(int i=1; i<=y-1; ++i) {
//        for(int j=1; j<=x-1; ++j) {
//            board[i][j] = now[y-1+i][j];
//            board[y-1+i][j] = now[y-1+i][x-1+j];
//            board[i][x-1+j] = now[i][j];
//            board[y-1+i][x-1+j] = now[i][x-1+j];
//        }
//    }
//}
//
//void f6() {
//    init();
//    memset(board, 0, sizeof(board));
//
//    int y = n/2 + 1;
//    int x = m/2 + 1;
//
//    for(int i=1; i<=y-1; ++i) {
//        for(int j=1; j<=x-1; ++j) {
//            board[i][j] = now[i][x-1+j];
//            board[y-1+i][j] = now[i][j];
//            board[i][x-1+j] = now[y-1+i][x-1+j];
//            board[y-1+i][x-1+j] = now[y-1+i][j];
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m >> r;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    for(int i=0; i<r; ++i) {
//        int com;
//        cin >> com;
//        switch(com) {
//            case 1:
//                f1();
//                break;
//            case 2:
//                f2();
//                break;
//            case 3:
//                f3();
//                break;
//            case 4:
//                f4();
//                break;
//            case 5:
//                f5();
//                break;
//            case 6:
//                f6();
//                break;
//        }
//    }
//    show();
//}