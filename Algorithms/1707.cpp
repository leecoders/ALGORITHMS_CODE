//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t; cin >> t;
//    while(t--) {
//        bool is_right = true;
//        int V, E;
//        cin >> V >> E;
//        vector<int> adj[V+1];
//        int visited[V+1];
//        memset(visited, -1, sizeof(visited));
//        for(int i=0; i<E; ++i) {
//            int a, b;
//            cin >> a >> b;
//            adj[a].push_back(b);
//            adj[b].push_back(a);
//        }
//        queue<int> q;
//        for(int lv = 1; lv <= V; ++lv) {
//            if(visited[lv] != -1) continue;
//            visited[lv] = 0;
//            q.push(lv);
//            while (!q.empty()) {
//                int now = q.front();
//                q.pop();
//                int team = visited[now]; // 0, 1
//                for (int i = 0; i < adj[now].size(); ++i) {
//                    if (visited[adj[now][i]] == -1) {
//                        if (team == 0)
//                            visited[adj[now][i]] = 1;
//                        else
//                            visited[adj[now][i]] = 0;
//                        q.push(adj[now][i]);
//                    } else {
//                        if (visited[adj[now][i]] == team) {
//                            is_right = false;
//                        }
//                    }
//                }
//                if (!is_right) break;
//            }
//        }
//        if (!is_right) cout << "NO" << '\n';
//        else cout << "YES" << '\n';
//    }
//}