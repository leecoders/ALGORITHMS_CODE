//#include "bits/stdc++.h"
//using namespace std;
//
//int const INF = 1234567890;
//int n, k;
//int visited[100001];
//int ans = INF;
//
//int main() {
//    memset(visited, -1, sizeof(visited));
//    cin >> n >> k;
//    if(n == k) {
//        cout << 0;
//        return 0;
//    }
//    queue<int> q;
//    visited[n] = 0;
//    q.push(n);
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//        if(now == k) {
//            continue;
//        }
//        if(now * 2 <= 100000 && (visited[now * 2] == -1 || visited[now * 2] > visited[now])) {
//            visited[now * 2] = visited[now];
//            q.push(now * 2);
//        }
//        if(now + 1 <= 100000 && (visited[now + 1] == -1 || visited[now + 1] > visited[now] + 1)) {
//            visited[now + 1] = visited[now] + 1;
//            q.push(now + 1);
//        }
//        if(now - 1 >= 0 && (visited[now - 1] == -1 || visited[now - 1] > visited[now] + 1)) {
//            visited[now - 1] = visited[now] + 1;
//            q.push(now - 1);
//        }
//    }
//    cout << visited[k];
//}