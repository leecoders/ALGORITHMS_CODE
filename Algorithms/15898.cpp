//#include "bits/stdc++.h"
//using namespace std;
//
//int n;
//pair<int, char> temp_board[5][5];
//pair<int, char> board[5][5];
//pair<int, char> mat[11][4][4];
//pair<int, char> temp_mat[4][4];
//vector<int> v;
//
//void copy() {
//    for(int i=0; i<5; ++i)
//        for(int j=0; j<5; ++j)
//            board[i][j] = temp_board[i][j];
//}
//
//void dfs(int cnt) {
//    if(cnt == 3) {
//
//        return;
//    }
//    for(int i=1; i<=n; ++i) {
//        v.push_back(i);
//        dfs(cnt + 1);
//        v.pop_back();
//    }
//}
//
//int main() {
//    cin >> n;
//    for(int i=0; i<5; ++i)
//        for(int j=0; j<5; ++j)
//            temp_board[i][j] = make_pair(0, 'W');
//    for(int i=1; i<=n; ++i) {
//        for(int j=0; j<4; ++j) {
//            for(int k=0; k<4; ++k) {
//                cin >> mat[i][j][k].first;
//            }
//        }
//        for(int j=0; j<4; ++j) {
//            for(int k=0; k<4; ++k) {
//                cin >> mat[i][j][k].second;
//            }
//        }
//    }
//}