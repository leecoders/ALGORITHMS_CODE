//#include "bits/stdc++.h"
//using namespace std;
//
//int n;
//long long board[501][501];
//int y, x;
//long long sum, sum2, ans;
//
//bool check() {
//    // 가로 체크
//    for(int i=1; i<=n; ++i) {
//        long long temp = 0;
//        for(int j=1; j<=n; ++j) {
//            temp += board[i][j];
//        }
//        if(temp != sum) return false;
//    }
//    // 세로 체크
//    for(int i=1; i<=n; ++i) {
//        long long temp = 0;
//        for(int j=1; j<=n; ++j) {
//            temp += board[j][i];
//        }
//        if(temp != sum) return false;
//    }
//    // 대각 체크
//    long long temp = 0;
//    for(int i=1; i<=n; ++i) {
//        temp += board[i][i];
//    }
//    if(temp != sum) return false;
//    temp = 0;
//    for(int i=1; i<=n; ++i) {
//        temp += board[i][n-i+1];
//    }
//    if(temp != sum) return false;
//    return true;
//}
//
//int main() {
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 0) {
//                y = i;
//                x = j;
//            }
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            if(y != i && x != j) {
//                for(int a = 1; a<=n; ++a) {
//                    sum += board[a][j];
//                }
//                break;
//            }
//        }
//        if(sum) break;
//    }
//    for(int i=1; i<=n; ++i)
//        sum2 += board[y][i];
//    ans = sum - sum2;
//    board[y][x] = ans;
//
//    if(check()) {
//        cout << ans;
//    }
//    else {
//        cout << -1;
//    }
//}