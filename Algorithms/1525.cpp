//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//map<string, int> visited;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int ans = INF;
//string s = "";
//
//int main() {
//    int sy, sx;
//    for(int i=1; i<=3; ++i) {
//        for(int j=1; j<=3; ++j) {
//            int input;
//            cin >> input;
//            s += char('0' + input);
//            if(input == 0) {
//                sy = i;
//                sx = j;
//            }
//        }
//    }
//    visited.insert(make_pair(s, 0));
//    queue<tuple<int, int, string>> q;
//    q.push(make_tuple(sy, sx, s));
//    while(!q.empty()) {
//        int y = get<0>(q.front());
//        int x = get<1>(q.front());
//        string now = get<2>(q.front());
//        q.pop();
//        if(now == "123456780") {
//            cout << visited["123456780"];
//            return 0;
//        }
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > 3 || nx > 3) continue;
//            string ns = now;
//            swap(ns[(y-1)*3 + x - 1], ns[(ny-1)*3 + nx - 1]);
//            if(visited.count(ns)) continue;
//            visited.insert(make_pair(ns, visited[now] + 1));
//            q.push(make_tuple(ny, nx, ns));
//        }
//    }
//    cout << -1;
//}