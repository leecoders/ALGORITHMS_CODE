//#include <iostream>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//
//char board[51][51];
//int ans = 987654321;
//string sol[2] = {"WBWBWBWB",
//                 "BWBWBWBW"};
//
//void check(int y, int x) {
//    int cnt1 = 0, cnt2 = 0;
//    for(int i=0; i < 8; ++i) {
//        for(int j=0; j < 8; ++j) {
//            if(board[y + i][x + j] != sol[i%2][j]) cnt1++;
//            if(board[y + i][x + j] != sol[(i+1)%2][j]) cnt2++;
//        }
//    }
//    ans = min(ans, min(cnt1, cnt2));
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    for(int i=0; i<n; ++i) {
//        string s;
//        cin >> s;
//        for(int j=0; j<m; ++j) {
//            board[i][j] = s[j];
//        }
//    }
//    for(int i=0; i + 8 <= n; ++i) {
//        for(int j=0; j + 8 <= m; ++j) {
//            check(i, j);
//        }
//    }
//    cout << ans;
//}