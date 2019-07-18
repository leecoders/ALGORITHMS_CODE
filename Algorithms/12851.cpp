//#include "bits/stdc++.h"
//using namespace std;
//
//int n, k;
//int visited[100001];
//int cnt[100001];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(visited, -1, sizeof(visited));
//    cin >> n >> k;
//    if(n == k) {
//        cout << 0 << '\n';
//        cout << 1;
//        return 0;
//    }
//    queue<int> q;
//    visited[n] = 0;
//    q.push(n);
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//        if(now == k) {
//            cnt[visited[now]]++;
//            continue;
//        }
//        if(now * 2 <= 100000 && (visited[now * 2] == -1 || visited[now * 2] >= visited[now] + 1)) {
//            visited[now * 2] = visited[now] + 1;
//            q.push(now * 2);
//        }
//        if(now + 1 <= 100000 && (visited[now + 1] == -1 || visited[now + 1] >= visited[now] + 1)) {
//            visited[now + 1] = visited[now] + 1;
//            q.push(now + 1);
//        }
//        if(now - 1 >= 0 && (visited[now - 1] == -1 || visited[now - 1] >= visited[now] + 1)) {
//            visited[now - 1] = visited[now] + 1;
//            q.push(now - 1);
//        }
//    }
//    cout << visited[k] << '\n';
//    cout << cnt[visited[k]];
//}