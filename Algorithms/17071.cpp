//#include "bits/stdc++.h"
//using namespace std;
//
//int n, k;
//bool visited[2][500001];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> k;
//    queue<int> q;
//    q.push(n);
//    visited[0][n] = true;  // 짝수 시간 0에 거리 n
//    int time = 1;
//    int dist = k;
//    if(n == k) {
//        cout << 0;
//        return 0;
//    }
//    while(!q.empty()) {
//        dist += time;
//        if(dist > 500000) {
//            cout << -1;
//            return 0;
//        }
//        if(visited[time % 2][dist]) {
//            cout << time;
//            return 0;
//        }
//        int len = q.size();
//        for(int i=0; i<len; ++i) {
//            int now = q.front();
//            q.pop();
//            if(now + 1 == dist || now - 1 == dist || now * 2 == dist) {
//                cout << time;
//                return 0;
//            }
//            int next;
//            next = now + 1;
//            if (next <= 500000 && !visited[(time) % 2][next]) {
//                visited[(time) % 2][next] = true;
//                q.push(next);
//            }
//            next = now - 1;
//            if (next >= 0 && !visited[(time) % 2][next]) {
//                visited[(time) % 2][next] = true;
//                q.push(next);
//            }
//            next = now * 2;
//            if (next <= 500000 && !visited[(time) % 2][next]) {
//                visited[(time) % 2][next] = true;
//                q.push(next);
//            }
//        }
//        time++;
//    }
//    cout << -1;
//}