//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {1, 2, -1, -2, 1, -1, 2, -2};
//int dx[] = {2, 1, -2, -1, -2, 2, -1, 1};
//bool visited[7][7];
//int sy, sx;
//int now_y, now_x;
//
//bool check(int y, int x) {
//    for(int i=0; i<8; ++i) {
//        int fy = y - dy[i];
//        int fx = x - dx[i];
//        if(fy < 1 || fx < 1 || fy > 6 || fx > 6) continue;
//        if(fy == now_y && fx == now_x) return true;
//    }
//    return false;
//}
//
//int main() {
//    string s;
//    cin >> s;
//    sy = s[0] - 'A' + 1;
//    sx = s[1] - '0';
//    now_y = sy;
//    now_x = sx;
//    visited[now_y][now_x] = 1;
//    for(int i=1; i<36; ++i) {
//        cin >> s;
//        int y = s[0] - 'A' + 1;
//        int x = s[1] - '0';
//        if(!check(y, x) || visited[y][x]) {
//            cout << "Invalid";
//            return 0;
//        }
//        visited[y][x] = 1;
//        now_y = y;
//        now_x = x;
//    }
//    if(!check(sy, sx)) {
//        cout << "Invalid";
//        return 0;
//    }
//    cout << "Valid";
//}