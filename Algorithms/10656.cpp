//#include "bits/stdc++.h"
//using namespace std;
//
//vector<pair<int, int> > ans;
//char board[51][51];
//int n, m;
//
//bool checkHori(int y, int x) {
//    for(int i=1; i<3; ++i) {
//        int nx = x + i;
//        if(nx > m) return false;
//        if(board[y][nx] != '.') return false;
//        if(board[y][x-1] == '.') return false;
//    }
//    return true;
//}
//
//bool checkVert(int y, int x) {
//    for(int i=1; i<3; ++i) {
//        int ny = y + i;
//        if(ny > n) return false;
//        if(board[ny][x] != '.') return false;
//        if(board[y-1][x] == '.') return false;
//    }
//    return true;
//}
//
//int main() {
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] == '.') {
//                if(checkHori(i, j) || checkVert(i, j)) {
//                    ans.push_back(make_pair(i, j));
//                }
//            }
//        }
//    }
//    cout << ans.size() << '\n';
//    for(int i=0; i<ans.size(); ++i) {
//        cout << ans[i].first << ' ' << ans[i].second << '\n';
//    }
//}