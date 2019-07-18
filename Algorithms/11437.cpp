//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//typedef double db;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//vector<int> t[50007];
//int parent[50007] = {0};
//int depth[50007] = {0};
//bool visited[50007] = {0};
//
//int lca(int u, int v) { // 항상 u가 더 크거나 같다는 전제
//    while(depth[u] > depth[v]) {
//        u = parent[u];
//    }
//    while(depth[u] < depth[v]) {
//        v = parent[v];
//    }
//    while(u != v) {
//        u = parent[u];
//        v = parent[v];
//    }
//
//    return u;
//}
//
//void bfs(int now) {
//    queue<int> q;
//    visited[now] = true;
//    q.push(now);
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//
//        for(int i=0; i<t[now].size(); ++i) {
//            if(visited[t[now][i]]) continue;
//            visited[t[now][i]] = true;
//            parent[t[now][i]] = now;
//            depth[t[now][i]] = depth[now] + 1;
//            q.push(t[now][i]);
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    int N, M;
//    cin >> N;
//    for(int i=1; i<N; ++i) {
//        int a, b;
//        cin >> a >> b;
//        t[a].pb(b);
//        t[b].pb(a);
//    }
//    bfs(1);
//
//    cin >> M;
//    for(int i=0; i<M; ++i) {
//        int a, b;
//        cin >> a >> b;
//        cout << lca(a, b) << '\n';
//    }
//}
