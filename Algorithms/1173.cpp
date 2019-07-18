//#include "bits/stdc++.h"
//using namespace std;
//
//int N, m, M, T, R;
//int visited[201];
//
//int main() {
//    cin >> N >> m >> M >> T >> R;
//    queue<pair<int, int> > q;
//    q.push(make_pair(0, m)); // 누적 운동 시간, 현재 맥박
//    int time = 0;
//    while(!q.empty()) {
//        int len = q.size();
//        for(int l = 0; l < len; ++l) {
//            int t = q.front().first;
//            int p = q.front().second;
//            q.pop();
//            if (t == N) {
//                cout << time;
//                return 0;
//            }
//            if (p + T <= M) {
//
//                q.push(make_pair(t + 1, p + T));
//            }
//            int np = p - R;
//            if(np < m) np = m;
//            q.push(make_pair(t, np));
//        }
//        ++time;
//    }
//    cout << -1;
//}