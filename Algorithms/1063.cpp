//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int sy, sx;
//int ty, tx;
//
//int main() {
//    string s, t;
//    int n;
//    cin >> s >> t >> n;
//    sx = s[0]-'A'+1;
//    sy = s[1]-'0';
//    tx = t[0]-'A'+1;
//    ty = t[1]-'0';
//    while(n--) {
//        string com;
//        cin >> com;
//        int ny = 0; // 변위 값을 체크
//        int nx = 0;
//        for(int i=0; i<com.size(); ++i) {
//            if(com[i] == 'R')
//                nx += dx[0];
//            else if(com[i] == 'L')
//                nx += dx[1];
//            else if(com[i] == 'B') // 좌표 상 아래지만, 가장 아래 행이 1부터 시작이니까 반대로 해줌
//                ny += dy[3];
//            else if(com[i] == 'T')
//                ny += dy[2];
//        }
//        if(sy + ny < 1 || sx + nx < 1 || sy + ny > 8 || sx + nx > 8) continue;
//        if((sy + ny == ty && sx + nx == tx) && (ty + ny < 1 || tx + nx < 1 || ty + ny > 8 || tx + nx > 8)) continue;
//        sy += ny;
//        sx += nx;
//        if(sy == ty && sx == tx) {
//            ty += ny;
//            tx += nx;
//        }
//    }
//    cout << char('A' + sx - 1) << char('0' + sy) << '\n' << char('A' + tx - 1) << char('0' + ty);
//}