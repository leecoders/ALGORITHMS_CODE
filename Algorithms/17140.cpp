//#include "bits/stdc++.h"
//using namespace std;
//
//int board[101][101];
//int n, m, k;
//int h, w;
//vector<pair<int, int> > v;
//int cnt[101];
//
////void show() {
////    cout << '\n';
////    for(int i=1; i<=h; ++i) {
////        for(int j=1; j<=w; ++j) {
////            cout << board[i][j] << ' ';
////        }
////        cout << '\n';
////    }
////}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m >> k;
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    h = w = 3;
//    if(board[n][m] == k) {
//        cout << 0;
//        return 0;
//    }
//    for(int t = 1; t <= 100; ++t) {
//        if(h >= w) {
//            int mx_w = 0;
//            for(int i=1; i<=h; ++i) {
//                v.clear();
//                memset(cnt, 0, sizeof(cnt));
//                for(int j=1; j<=w; ++j) {
//                    if(board[i][j]) {
//                        cnt[board[i][j]]++;
//                    }
//                }
//                for(int j=1; j<=100; ++j) {
//                    if(cnt[j]) {
//                        v.push_back(make_pair(cnt[j], j));
//                    }
//                }
//                sort(v.begin(), v.end());
//                int order = 1;
//                for(int j=0; j<v.size(); ++j) {
//                    board[i][order++] = v[j].second;
//                    board[i][order++] = v[j].first;
//                    if(order == 101) break;
//                }
//                mx_w = max(mx_w, order - 1);
//                while(order < 101) {
//                    board[i][order++] = 0;
//                }
//            }
//            w = mx_w;
//        }
//        else {
//            int mx_h = 0;
//            for(int i=1; i<=w; ++i) {
//                v.clear();
//                memset(cnt, 0, sizeof(cnt));
//                for(int j=1; j<=h; ++j) {
//                    if(board[j][i]) {
//                        cnt[board[j][i]]++;
//                    }
//                }
//                for(int j=1; j<=100; ++j) {
//                    if(cnt[j]) {
//                        v.push_back(make_pair(cnt[j], j));
//                    }
//                }
//                sort(v.begin(), v.end());
//                int order = 1;
//                for(int j=0; j<v.size(); ++j) {
//                    board[order++][i] = v[j].second;
//                    board[order++][i] = v[j].first;
//                    if(order == 101) break;
//                }
//                mx_h = max(mx_h, order - 1);
//                while(order < 101) {
//                    board[order++][i] = 0;
//                }
//            }
//            h = mx_h;
//        }
//        if(board[n][m] == k) {
//            cout << t;
//            return 0;
//        }
//    }
//    cout << -1;
//    return 0;
//}