//#include "bits/stdc++.h"
//using namespace std;
//
//int n, k;
//int visited[100001];
//int parent[100001];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(visited, -1, sizeof(visited));
//    cin >> n >> k;
//    if(n == k) {
//        cout << 0 << '\n';
//        cout << n;
//        return 0;
//    }
//    queue<int> q;
//    visited[n] = 0;
//    q.push(n);
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//        if(now == k) {
//            cout << visited[k] << '\n';
//            break;
//        }
//        if(now * 2 <= 100000 && (visited[now * 2] == -1 || visited[now * 2] > visited[now])) {
//            parent[now * 2] = now;
//            visited[now * 2] = visited[now] + 1;
//            q.push(now * 2);
//        }
//        if(now + 1 <= 100000 && (visited[now + 1] == -1 || visited[now + 1] > visited[now] + 1)) {
//            parent[now + 1] = now;
//            visited[now + 1] = visited[now] + 1;
//            q.push(now + 1);
//        }
//        if(now - 1 >= 0 && (visited[now - 1] == -1 || visited[now - 1] > visited[now] + 1)) {
//            parent[now - 1] = now;
//            visited[now - 1] = visited[now] + 1;
//            q.push(now - 1);
//        }
//    }
//    vector<int> chase;
//    chase.push_back(k);
//    int len = visited[k];
//    for(int i=0; i<len; ++i) {
//        chase.push_back(parent[k]);
//        k = parent[k];
//    }
//    for(int i=chase.size()-1; i>=0; --i)
//        cout << chase[i] << ' ';
//}