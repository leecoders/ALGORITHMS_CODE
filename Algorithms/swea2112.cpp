//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//int n, m, k;
//string board[14];
//string A, B;
//string a, b;
//int ans;
//
//void init() {
//    for(int i=0; i<n; ++i) {
//        board[i] = "";
//    }
//    for(int i=0; i<m; ++i) {
//        a += '0';
//        b += '1';
//    }
//}
//
//bool check() {
//    for(int i=0; i<m; ++i) {
//        int cnt = 0;
//        for(int j=0; j<n; ++j) {
//            if(board[j][i] == '0') {
//                cnt++;
//                if(cnt >= k) break;
//            }
//            else {
//                cnt = 0;
//            }
//        }
//        if(cnt >= k) continue;
//        cnt = 0;
//        for(int j=0; j<n; ++j) {
//            if(board[j][i] == '1') {
//                cnt++;
//                if(cnt >= k) break;
//            }
//            else {
//                cnt = 0;
//            }
//        }
//        if(cnt < k) return false;
//    }
//    return true;
//}
//
//void dfs(int now, int cnt) {
//    if(ans <= cnt) return;
//    if(check()) {
//        ans = min(ans, cnt);
//        return;
//    }
//    for(int i=now+1; i<n; ++i) { // i=0 부터 탐색
//        string temp = board[i];
//        board[i] = a;
//        dfs(i, cnt + 1);
//        board[i] = b;
//        dfs(i, cnt + 1);
//        board[i] = temp;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tt;
//    cin >> tt;
//    for(int tc=1; tc <= tt; ++tc) {
//        ans = INF;
//        cin >> n >> m >> k;
//        init();
//        for(int i=0; i<n; ++i) {
//            for(int j=0; j<m; ++j) {
//                int input;
//                cin >> input;
//                board[i] += input == 1? "1" : "0";
//            }
//        }
//        for(int i=0; i<m; ++i) {
//            A += "0";
//            B += "1";
//        }
//        dfs(-1, 0);
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}