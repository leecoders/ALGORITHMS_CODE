//#include "bits/stdc++.h"
//using namespace std;
//
//int board[20][20];
//int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
//int dx[] = {1, -1, 0, 0, 1, -1, -1, 1};
//vector<pair<int, int> > v;
//
//int check(int a, int b, int color) {
//    for(int i=0; i<4; ++i) {
//        v.clear();
//        int y = a;
//        int x = b;
//        v.push_back(make_pair(x, y));
//        int cnt = 0;
//        while(!(y+dy[2*i]<1||x+dx[2*i]<1||y+dy[2*i]>19||x+dx[2*i]>19)&&board[y+dy[2*i]][x+dx[2*i]]==color) {
//            y += dy[2*i];
//            x += dx[2*i];
//            cnt++;
//            v.push_back(make_pair(x, y));
//        }
//        y = a;
//        x = b;
//        while(!(y+dy[2*i+1]<1||x+dx[2*i+1]<1||y+dy[2*i+1]>19||x+dx[2*i+1]>19)&&board[y+dy[2*i+1]][x+dx[2*i+1]]==color) {
//            y += dy[2*i+1];
//            x += dx[2*i+1];
//            cnt++;
//            v.push_back(make_pair(x, y));
//        }
//        if(cnt == 4) return true;
//    }
//    return false;
//}
//
//int main() {
//    for(int i=1; i<=19; ++i) {
//        for(int j=1; j<=19; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    for(int i=1; i<=19; ++i) {
//        for(int j=1; j<=19; ++j) {
//            if(board[i][j] && check(i, j, board[i][j])) {
//                sort(v.begin(), v.end());
//                cout << board[i][j] << '\n';
//                cout << v[0].second << ' ' << v[0].first;
//                return 0;
//            }
//        }
//    }
//    cout << 0;
//}