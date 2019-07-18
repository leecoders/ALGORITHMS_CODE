//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//vector<int> a[1001];
//bool visited[1001] = {false};
//
//void dfs(int now) {
//    for(int i=0; i<a[now].size(); ++i) {
//        if(!visited[a[now][i]]) {
//            visited[a[now][i]] = true;
//            dfs(a[now][i]);
//        }
//    }
//}
//
//int main() {
//    int V, E;
//    cin >> V >> E;
//    for(int i=0; i<E; ++i) {
//        int u, v;
//        cin >> u >> v;
//        a[u].push_back(v);
//        a[v].push_back(u);
//    }
//
//    int cnt = 0;
//    for(int i=1; i<=V; ++i) {
//        if(!visited[i]) {
//            cnt++;
//            visited[i] = true;
//            dfs(i);
//        }
//    }
//    cout << cnt;
//}