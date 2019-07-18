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
//vector<pii> t[40007];
//int parent[40007] = {0};
//int depth[40007] = {0};
//int dist[40007] = {0}; // 부모까지의 거리
//bool visited[40007] = {0};
//
//int lca(int u, int v) {
//    int ret = 0;
//    while(depth[u] > depth[v]) {
//        ret += dist[u];
//        u = parent[u];
//    }
//    while(depth[u] < depth[v]) {
//        ret += dist[v];
//        v = parent[v];
//    }
//    while(u != v) {
//        ret += dist[u] + dist[v];
//        u = parent[u];
//        v = parent[v];
//    }
//
//    return ret;
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
//            if(visited[t[now][i].first]) continue;
//            visited[t[now][i].first] = true;
//            parent[t[now][i].first] = now;
//            depth[t[now][i].first] = depth[now] + 1;
//            dist[t[now][i].first] = t[now][i].second;
//            q.push(t[now][i].first);
//        }
//    }
//}
//
//int main() {
//    _upgrade;
//    int N, M;
//    cin >> N;
//    for(int i=1; i<N; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        t[a].pb(mp(b,c));
//        t[b].pb(mp(a,c));
//    }
//
//    bfs(1);
//
//    cin >> M;
//    for(int i=0; i<M; ++i) {
//        int a, b;
//        cin >> a >> b;
//        cout << lca(a, b) << '\n';
//    }
//}
