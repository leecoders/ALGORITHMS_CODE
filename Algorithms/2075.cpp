//#include "bits/stdc++.h"
//using namespace std;
//
//const int MINF = -1234567890;
//int board[1500][1500];
//int p[1500];
//int mx, idx;
//
//int main() {
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<n; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    for(int i=0; i<n; ++i)
//        p[i] = n-1;
//    for(int cnt = 1; cnt <= n; ++cnt) {
//        mx = MINF;
//        for(int i=0; i<n; ++i) {
//            if(mx < board[p[i]][i]) {
//                mx = board[p[i]][i];
//                idx = i;
//            }
//        }
//        p[idx]--;
//    }
//    cout << mx;
//}